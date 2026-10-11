# 🅿️ Arduino-C Based Smart Parking Lot System

Bu depo; Arduino mikrodenetleyicisi ve C programlama dili kullanılarak geliştirilmiş, sensör tabanlı akıllı otopark otomasyon sisteminin kaynak kodlarını barındırır.

---

## 🚀 Proje Hakkında

Bu proje; modern otopark yönetim sistemlerinin temel mantığını simüle etmek, araç giriş-çıkış takibini otomatikleştirmek ve boş/dolu park yeri durumunu anlık olarak denetlemek amacıyla tasarlanmıştır. 

---

## 🛠️ Donanım Bileşenleri & Gereksinimler

Sistemi fiziksel olarak kurmak veya test etmek için genellikle aşağıdaki bileşenler kullanılır:
- **Mikrodenetleyici:** Arduino Uno / Nano (veya uyumlu kartlar)
- **Sensörler:** Park slotlarının doluluk oranını algılamak için Mesafe Sensörleri (Ultrasonic - HC-SR04) veya IR (Kızılötesi) engel sensörleri.
- **Aktüatörler / Çıkış Birimleri:** 
  - Bariyer kontrolü için Servo Motor / Step Motor.
  - Durum göstergeleri için LED'ler (Yeşil: Boş, Kırmızı: Dolu) veya LCD Ekran (`I2C 16x2`).
- **Bağlantı:** Jumper kablolar ve breadboard.

---

## 💻 Yazılım ve Kod Yapısı

- **Dil:** Arduino / C++ (C temelli gömülü sistem mantığı)
- **Mimari:** Modüler fonksiyonlar ile sensör okuma, eşik değeri kontrolü, motor tetikleme ve durum yönetimi.

---

## 📋 Kurulum ve Çalıştırma

1. Repoyu klonlayın veya zip olarak indirin:
   ```bash
   git clone [https://github.com/burakly/ArduinoC-Parking-Lot.git](https://github.com/burakly/ArduinoC-Parking-Lot.git)
