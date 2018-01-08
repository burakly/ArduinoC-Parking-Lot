using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Data.OleDb;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using System.IO.Ports;

namespace GZS_SON
{
    public partial class Form2 : Form
    {
        OleDbConnection baglanti;
        OleDbCommand komut;
        OleDbDataAdapter da;

        public Form2()
        {
            InitializeComponent();
            //serialPort1.PortName = "COM3";
            //serialPort1.BaudRate = 9600;
            //serialPort1.DtrEnable = true;
            // serialPort1.Open();
            // serialPort1.DataReceived += serialPort1_DataReceived;
            //// KisiListele();
            label3.Text = "BOŞ";
            label3.BackColor = System.Drawing.Color.LightGreen;
            label5.Text = "DOLU";
            label5.BackColor = System.Drawing.Color.Red;
            label7.Text = "BOŞ";
            label7.BackColor = System.Drawing.Color.LightGreen;
        }
        


        private void button2_Click(object sender, EventArgs e)
        {
           // serialPort1.Close();
            this.Close();
            Form1 f1 = new Form1();
            f1.Show();
        }
        private void serialPort1_DataReceived(object sender, System.IO.Ports.SerialDataReceivedEventArgs e)
        {
            //string line = serialPort1.ReadLine();
            //this.BeginInvoke(new LineReceivedEvent(LineReceived), line);
             
        }

        private delegate void LineReceivedEvent(string line);
        private void LineReceived(string line)
        {
            //What to do with the received line here
           

            if (line == "1.Park Yeri Bos\r")
            {
                label3.Text = "BOŞ";
                label3.BackColor = System.Drawing.Color.LightGreen;
            }
            else if (line == "1.Park Yeri Dolu\r")
            {
                label3.Text = "DOLU";
                label3.BackColor = System.Drawing.Color.Red;
            }
            else if (line == "2.Park Yeri Bos\r")
            {
                label5.Text = "BOŞ";
                label5.BackColor = System.Drawing.Color.LightGreen;
            }
            else if (line == "2.Park Yeri Dolu\r")
            {
                label5.Text = "DOLU";
                label5.BackColor = System.Drawing.Color.Red;
            }
            else if (line == "3.Park Yeri Bos\r")
            {
                label7.Text = "BOŞ";
                label7.BackColor = System.Drawing.Color.LightGreen;
            }
            else if (line == "3.Park Yeri Dolu\r")
            {
                label7.Text = "DOLU";
                label7.BackColor = System.Drawing.Color.Red;
            }
            //else if (line == "4.Park Yeri Bos\r")
           //// {
             //   label9.Text = "BOŞ";
              ////  label9.BackColor = System.Drawing.Color.LightGreen;
           // }
           // else if (line == "4.Park Yeri Dolu\r")
            //{
             //   label9.Text = "DOLU";
              //  label9.BackColor = System.Drawing.Color.Red;
            //}
            else if (line == "Gece\r")
            {
                pictureBox1.ImageLocation = "gece.png";
                //label1.Text = "Gece";
                //label1.BackColor = System.Drawing.Color.DarkGray;
            }
            else if (line == "Gunduz\r")
            {
                pictureBox1.ImageLocation = "gunduz.png";

                //label1.Text = "Gündüz";
                //label1.BackColor = System.Drawing.Color.Yellow;
            }  
        }
        private void button1_Click(object sender, EventArgs e)
        {
            if (!serialPort1.IsOpen)
            {
                try
                {
                    serialPort1.Open();
                    serialPort1.Write(textBox1.Text);
                    serialPort1.Close();
                }
                catch
                {
                    MessageBox.Show("There was an error. Please make sure that the correct port was selected, and the device, plugged in.");
                }
            }
            else serialPort1.Write(textBox1.Text);
        }
    }
}
