Aracın Sinir Sistemi - CAN Bus Araştırması
🎯 Görevin Amacı
Bir Formula Student aracında onlarca sensör, motor sürücü ve kontrolcü bulunur. Bunların her biri için ayrı kablo çekersek, aracın ağırlığı 2 katına çıkar. İşte burada devreye CAN Bus girer.

Bu görevde kod yazmayacaksınız. Bunun yerine, bir Gömülü Sistem Mühendisi gibi teknik doküman okuyacak, araştıracak ve öğrendiklerinizi teknik bir rapor haline getireceksiniz.

Motto: "Arabanın tekerleği dönsün istiyorsan, önce beyninin nasıl konuştuğunu öğrenmelisin."

📚 Araştırma Soruları (Müfredat)
Aşağıdaki başlıkları ve soruları detaylıca araştırın. Raporunuzda bu soruların teknik ve şematik cevapları olmalıdır.

Bölüm 1: Temeller ve Fiziksel Katman (Hardware)
CAN Bus Nedir? Tarihçesi nedir? Neden otomotiv endüstrisi (Bosch) bunu geliştirdi?

Diferansiyel Sinyal (Differential Signaling): CAN_H ve CAN_L nedir?

Neden tek kablo yerine iki kablo (Twisted Pair) kullanılır?

Bu yapı "Gürültüye" (Noise) karşı nasıl koruma sağlar? (Çizimle anlatın).

Sonlandırma Direnci (Termination Resistor):

Neden hattın iki ucuna 120 Ohm direnç takarız? Takmazsak ne olur? (Yansıma/Reflection kavramı).

Bölüm 2: Protokol ve Veri Yapısı (Data Link Layer)
CAN Frame (Veri Paketi) Yapısı: Bir CAN mesajı hangi parçalardan oluşur?

Start of Frame (SOF)

Arbitration Field (ID) - Standart (11-bit) vs Extended (29-bit) farkı nedir?

Control Field (DLC) - Bir pakette en fazla kaç byte veri taşınabilir?

Data Field - Verinin kendisi.

CRC Field - Hata kontrolü nasıl yapılır?

ACK Field - Mesajın ulaştığı nasıl anlaşılır?

Bölüm 3: Trafik Yönetimi (Arbitration) 🚦
CAN Bus'ta "Merkezi Yönetici" (Master) yoktur. Herkes konuşabilir.

Arbitrasyon (Önceliklendirme): İki modül (Örn: Motor ve Fren) aynı anda konuşmaya başlarsa ne olur?

ID'nin Önemi: Düşük ID (Örn: 0x100) mi daha önceliklidir, Yüksek ID (Örn: 0x500) mi? Neden?

Senaryo: Acil Fren Mesajı ile Klima Mesajı çakışırsa hangisi kazanır?

Bölüm 4: Formula Student ve Pratik Uygulama
Neden Ethernet veya USB değil de CAN Bus? (Hız, Güvenlik, Mesafe kıyaslaması).

DBC Dosyası Nedir? Bir CAN veritabanı (Database) dosyası yazılım ekibi için neden hayati önem taşır?

📝 Teslim Formatı (Markdown Raporu)
Raporunuzu Word veya PDF olarak DEĞİL, GitHub'ın dili olan Markdown (.md) formatında hazırlayacaksınız.

İstenen Rapor Yapısı:

Başlık: Task-03: CAN Bus Araştırma Raporu - [Ad Soyad]

Görsellik: Anlattığınız konuları destekleyen şemalar ve görseller (İnternetten bulup referans vererek veya kendiniz çizerek) ekleyin.

Kaynaklar: En altta yararlandığınız kaynakları (Vector, TI, Kvaser, Wikipedia vb.) listeleyin.

📤 Teslim Adımları (Git Workflow)
Bu görevde de Git kaslarınızı çalıştırmaya devam ediyoruz.

Branch: Kendi Fork'unuzda feature/can-bus-research adında yeni bir dal açın.

Dosya: Submissions/Task-03-[Ad]-[Soyad]/ klasörünü oluşturun.

Commit: docs: Task-03 CAN Bus arastirmasi tamamlandi

Pull Request: Ana repoya PR açın.

💡 İpuçları ve Kaynaklar
Araştırmaya başlamak için şu anahtar kelimeleri kullanabilirsiniz:

Bosch CAN Specification 2.0

Vector CAN Protocol Tutorial

Texas Instruments CAN Physical Layer

Kvaser CAN Bus Explained

Başarılar Ekip! Bu görevi tamamladığınızda, arabaların nasıl "konuştuğunu" öğrenmiş olacaksınız.