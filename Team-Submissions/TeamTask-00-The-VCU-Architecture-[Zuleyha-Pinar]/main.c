#include <stdio.h>
#include <stdbool.h>
#include "vcu-define.h"

// Diðer dosyalardaki fonksiyonlarý burada tanýtýyoruz (Extern)
extern void Guvenlik_Denetimi(Arac* a);              // Senin yazdýðýn (logic_safety.c)
extern void Performans_Ve_Aero_Yonetimi(Arac* a);    // Arkadaþýnýn yazdýðý (logic_motor.c)
extern void Veri_Girisi_Isle(Arac* a);               // Arkadaþýnýn yazdýðý (input_output.c)
extern void Dashboard_Goster(Arac* a);                // Arkadaþýnýn yazdýðý (input_output.c)

int main() {
    // 1. ARACI BAÞLAT (Ýlk deðerleri sýfýrla)
    Arac formula_araci = { 0 };

    // Baþlangýç için bazý varsayýlan deðerler
    formula_araci.batarya_dolulugu = 100;
    formula_araci.basladi_mi = false;
    formula_araci.acil_durum = false;

    printf("Project Cortex: VCU Simülasyonu Baþlatýldý...\n");
    printf("Yardým: Veri girmek için 'ID DEGER' yazýn (Örn: 1 1).\n");

    // 2. ANA DÖNGÜ (Sonsuz Döngü)
    while (1) {
        // ADIM 1: Dashboard'u Güncelle (Ekraný Yazdýr)
        Dashboard_Goster(&formula_araci);

        // ADIM 2: Kullanýcýdan Veri Al (Sensör/CAN Verisi Simülasyonu)
        Veri_Girisi_Isle(&formula_araci);

        // ADIM 3: GÜVENLÝK DENETÝMÝ (Senin Kurallarýn)
        // Her þeyden önce güvenlik! Eðer bir tehlike varsa tork kesilir.
        Guvenlik_Denetimi(&formula_araci);

        // ADIM 4: MOTOR VE AERO YÖNETÝMÝ (Arkadaþýnýn Kurallarý)
        // Güvenlik onayý verirse tork hesaplanýr ve DRS kontrol edilir.
        Performans_Ve_Aero_Yonetimi(&formula_araci);

        // Not: Gerçek bir sistemde burada 'delay' (bekleme) olurdu, 
        // ama simülasyonda her veri giriþinden sonra döngü döner.
    }

    return 0;
}