# so_long

42 okulunun 2D oyun projesi olan so_long, MinilibX grafik kütüphanesi kullanılarak geliştirilmiş bir oyun projesidir. https://github.com/berkayinam/howcanido ya bakmayı da unutmayın

## 📚 Proje Hakkında

so_long projesi, oyuncunun tüm koleksiyonları toplayarak haritadaki çıkışa ulaşmaya çalıştığı basit bir 2D oyundur. MinilibX grafik kütüphanesi kullanılarak C dilinde geliştirilmiştir.

## 💻 Teknolojiler

- C Programlama Dili
- MinilibX Grafik Kütüphanesi
- Makefile
- XPM Dosya Formatı

## 🛠️ Kurulum

### Gereksinimler
- GCC Derleyici
- Make
- MinilibX Kütüphanesi
- X11 Geliştirme Kütüphaneleri

### Derleme
```bash
make
```

### Bonus Özellikler için Derleme
```bash
make bonus
```

## 🎮 Oyun Kullanımı

```bash
./so_long maps/map.ber
```

## 🗺️ Harita Kuralları

Harita `.ber` uzantılı bir dosyada tanımlanmalı ve şu karakterleri içermelidir:
- `0`: Boş alan
- `1`: Duvar
- `C`: Koleksiyon
- `E`: Çıkış
- `P`: Oyuncu başlangıç pozisyonu

Örnek harita:
```
1111111111111
10010000000C1
1000011111001
1P0011E000001
1111111111111
```

## 📝 Proje Gereksinimleri

### Zorunlu Kısım
- [x] Pencere yönetimi
- [x] Harita doğrulama
- [x] Sprite görüntüleme
- [x] Hareket kontrolü (W,A,S,D)
- [x] Hareket sayısı gösterimi
- [x] Koleksiyon toplama
- [x] Çıkış kontrolü

### Bonus Kısım
- [x] Düşman sprite'ları
- [x] Sprite animasyonları
- [x] Hareket sayacı ekranda gösterimi

## 🎨 Görsel Öğeler

### Sprite'lar
- Oyuncu karakteri
- Duvar
- Koleksiyon nesnesi
- Çıkış kapısı

### Animasyonlar
- Oyuncu hareketi
- Koleksiyon toplama
- Çıkış animasyonu

## 🔍 Hata Kontrolü

### Harita Doğrulama
- Dikdörtgen şekil kontrolü
- Duvar çevrili olma kontrolü
- Gerekli karakterlerin varlığı
- Geçerli yol kontrolü

### Oyun Kontrolü
- Bellek sızıntısı kontrolü
- Pencere yönetimi
- Event handling
- Çarpışma kontrolü

## 📈 Optimizasyon

### Performans
- Sprite rendering optimizasyonu
- Bellek yönetimi
- Event loop optimizasyonu

### Kod Kalitesi
- Modüler yapı
- Norm kurallarına uygunluk
- Hata yönetimi
- Temiz kod prensipleri

## 🧪 Test Senaryoları

### Harita Testleri
```bash
# Geçerli harita
./so_long maps/valid_map.ber

# Geçersiz harita
./so_long maps/invalid_map.ber

# Büyük harita
./so_long maps/large_map.ber
```

### Oyun Testleri
- Hareket kontrolü
- Koleksiyon toplama
- Çıkış kontrolü
- Düşman etkileşimi (Bonus)

## 🐛 Hata Ayıklama

### Yaygın Hatalar
1. Harita Hataları
   - Geçersiz karakter
   - Eksik duvar
   - Geçersiz boyut

2. Bellek Hataları
   - Bellek sızıntısı
   - Dangling pointer
   - Double free

## 📚 Kullanılan Kütüphaneler

### Proje Kütüphaneleri
- [libft](libft/): Temel C fonksiyonları
- [ft_printf](ft_printf/): Printf implementasyonu
- [get_next_line](get_next_line/): Dosya okuma
- [mlx](mlx/): MinilibX grafik kütüphanesi

## 📝 Lisans

Bu proje [MIT](LICENSE) lisansı altında lisanslanmıştır.

## 📚 Kaynaklar

- [42 Docs](https://harm-smits.github.io/42docs/libs/minilibx)
- [MinilibX Documentation](https://qst0.github.io/ft_libgfx/man_mlx.html)
- [XPM Format](https://en.wikipedia.org/wiki/X_PixMap)

---

⭐️ Bu projeyi beğendiyseniz yıldız vermeyi unutmayın!
