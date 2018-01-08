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

namespace GZS_SON
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }
        OleDbConnection con;
        OleDbCommand cmd;
        OleDbDataReader dr;
        private void button1_Click(object sender, EventArgs e)
        {
            string ad = textBox1.Text;
            string sifre = textBox2.Text;
            //con = new OleDbConnection("Provider=Microsoft.ACE.Oledb.12.0;Data Source=giris.accdb");
            //cmd = new OleDbCommand();
            //con.Open();
            //cmd.Connection = con;
            //cmd.CommandText = "SELECT * FROM kullanici where k_ad='" + textBox1.Text + "' AND k_sifre='" + textBox2.Text + "'";
            //cmd.CommandText = "Select * from kullanici Where COLLATE SQL_Latin1_General_CP1_CS_AS k_ad=" + textBox1.Text + "and COLLATE SQL_Latin1_General_CP1_CS_AS k_sifre='" + textBox2.Text + "' ";
            //  cmd.CommandText = "Select * from kullanici Where k_ad='" + textBox1.Text + "' SQL_Latin1_General_CP1_CS_AS and k_sifre='" + textBox2.Text + "' SQL_Latin1_General_CP1_CS_AS";
            //cmd.CommandText = "Select * from kullanici Where k_ad= COLLATE Latin1_General_CS_AS" + textBox1.Text + "  and k_sifre= COLLATE Latin1_General_CS_AS" + textBox2.Text ;


            //cmd.CommandText = "Select * from Kullanici where StrComp(KullaniciAdi,'" + textBox1.Text + "',0)=0 and StrComp(Sifresi,'" + textBox2.Text + "',0)=0";
            // cmd.CommandText = "Select * from kullanici Where k_ad = '" + textBox1.Text + "' COLLATE SQL_Latin1_General_CS_AS and k_sifre  ='" + textBox2.Text + "' COLLATE SQL_Latin1_General_CS_AS";
            //dr = cmd.ExecuteReader();

            // int ss = cmd.ExecuteNonQuery();
            //if (dr.Read())
            if(ad == "burak" && sifre == "l0caladm1n")
            {
                Form2 f2 = new Form2();
                this.Hide();
                f2.Show();
            }
            else
            {
                MessageBox.Show("Kullanıcı adı ya da şifre yanlış");
            }

            //con.Close();
        }
    }
}
