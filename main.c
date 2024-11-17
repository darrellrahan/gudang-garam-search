#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

void dashboard();
void search();
void detail(
    char nama[],
    char manufaktur[],
    int jumlahBatang,
    int hargaPerBatang,
    int hargaPerBungkus,
    int hargaPerSlop,
    bool bisaDiketeng,
    bool isLegal,
    bool isIlegal,
    bool isKretek,
    bool isFilter,
    bool isKlik);
void addToCart();

int main(int argc, char const *argv[])
{
    dashboard();
    return 0;
}

void dashboard()
{
    printf("\e[1;1H\e[2J");
    puts("**************************DASHBOARD TEST********************************\n");

    puts("Input '1' untuk Search\n");

    int input;
    printf("Input: ");
    scanf("%d", &input);
    getchar();

    switch (input)
    {
    case 1:
        search();
        break;
    default:
        break;
    }
}

void search()
{
    printf("\e[1;1H\e[2J");
    puts("**************************SEARCH********************************\n");
    struct Roko
    {
        char nama[50];
        char manufaktur[50];
        int jumlahBatang;
        int hargaPerBatang;
        int hargaPerBungkus;
        int hargaPerSlop;
        bool bisaDiketeng;
        bool isLegal;
        bool isIlegal;
        bool isKretek;
        bool isFilter;
        bool isKlik;
    };
    struct Roko listRoko[13] = {
        {
            "esse juicy", // nama
            "PT Esse",    // manufaktur
            16,           // jumlah  batang
            2500,         // harga per batang
            35000,        // harga per bungkus
            300000,       // harga per selop
            true,         // bisa diketeng?
            true,         // is legal?
            false,        // is ilegal?
            false,        // is kretek?
            true,         // is filter?
            true,         // is klik?
        },
        {
            "esse berry pop", // nama
            "PT Esse",        // manufaktur
            16,               // jumlah  batang
            2500,             // harga per batang
            38000,            // harga per bungkus
            320000,           // harga per selop
            true,             // bisa diketeng?
            true,             // is legal?
            false,            // is ilegal?
            false,            // is kretek?
            true,             // is filter?
            true,             // is klik?
        },
        {
            "juara teh", // nama
            "PT Esse",   // manufaktur
            12,          // jumlah  batang
            2000,        // harga per batang
            15000,       // harga per bungkus
            180000,      // harga per selop
            false,       // bisa diketeng?
            true,        // is legal?
            false,       // is ilegal?
            true,        // is kretek?
            false,       // is filter?
            false,       // is klik?
        },
        {
            "juara mangga", // nama
            "PT Esse",      // manufaktur
            12,             // jumlah  batang
            2000,           // harga per batang
            15000,          // harga per bungkus
            180000,         // harga per selop
            false,          // bisa diketeng?
            true,           // is legal?
            false,          // is ilegal?
            true,           // is kretek?
            false,          // is filter?
            false,          // is klik?
        },
        {
            "garpit",          // nama
            "PT Gudang Garam", // manufaktur
            12,                // jumlah  batang
            2500,              // harga per batang
            27000,             // harga per bungkus
            25000,             // harga per selop
            true,              // bisa diketeng?
            true,              // is legal?
            false,             // is ilegal?
            true,              // is kretek?
            false,             // is filter?
            false,             // is klik?
        },
        {
            "samsu premium",  // nama
            "PT Dji Sam Soe", // manufaktur
            12,               // jumlah  batang
            2000,             // harga per batang
            22000,            // harga per bungkus
            200000,           // harga per selop
            true,             // bisa diketeng?
            true,             // is legal?
            false,            // is ilegal?
            true,             // is kretek?
            false,            // is filter?
            false,            // is klik?
        },
        {
            "samsu",          // nama
            "PT Dji Sam Soe", // manufaktur
            12,               // jumlah  batang
            1500,             // harga per batang
            16000,            // harga per bungkus
            170000,           // harga per selop
            true,             // bisa diketeng?
            true,             // is legal?
            false,            // is ilegal?
            true,             // is kretek?
            false,            // is filter?
            false,            // is klik?
        },
        {
            "juara jambu", // nama
            "PT Esse",     // manufaktur
            12,            // jumlah  batang
            2000,          // harga per batang
            15000,         // harga per bungkus
            180000,        // harga per selop
            false,         // bisa diketeng?
            true,          // is legal?
            false,         // is ilegal?
            true,          // is kretek?
            false,         // is filter?
            false,         // is klik?
        },
        {
            "sampoerna",    // nama
            "PT Sampoerna", // manufaktur
            16,             // jumlah  batang
            2500,           // harga per batang
            36000,          // harga per bungkus
            360000,         // harga per selop
            true,           // bisa diketeng?
            true,           // is legal?
            false,          // is ilegal?
            false,          // is kretek?
            true,           // is filter?
            false,          // is klik?
        },
        {
            "gemoy mangga", // nama
            "PT Gerindra",  // manufaktur
            20,             // jumlah  batang
            650,            // harga per batang
            12000,          // harga per bungkus
            100000,         // harga per selop
            false,          // bisa diketeng?
            false,          // is legal?
            true,           // is ilegal?
            false,          // is kretek?
            true,           // is filter?
            true,           // is klik?
        },
        {
            "gemoy anggur", // nama
            "PT Gerindra",  // manufaktur
            20,             // jumlah  batang
            650,            // harga per batang
            12000,          // harga per bungkus
            100000,         // harga per selop
            false,          // bisa diketeng?
            false,          // is legal?
            true,           // is ilegal?
            false,          // is kretek?
            true,           // is filter?
            true,           // is klik?
        },
        {
            "arash",    // nama
            "PT Arash", // manufaktur
            20,         // jumlah  batang
            600,        // harga per batang
            12000,      // harga per bungkus
            100000,     // harga per selop
            false,      // bisa diketeng?
            false,      // is legal?
            true,       // is ilegal?
            false,      // is kretek?
            true,       // is filter?
            false,      // is klik?
        },
        {
            "mustika",    // nama
            "PT Mustika", // manufaktur
            12,           // jumlah  batang
            1250,         // harga per batang
            13000,        // harga per bungkus
            110000,       // harga per selop
            false,        // bisa diketeng?
            true,         // is legal?
            false,        // is ilegal?
            true,         // is kretek?
            false,        // is filter?
            false,        // is klik?
        },
    };

    // get search keyword
    char keyword[50];
    printf("Cari roko: ");
    gets(keyword);

    // collect search results
    struct Roko foundData[13];

    // remove weird characters within strings in foundData
    for (int i = 0; i < (sizeof(foundData) / sizeof(foundData[0])); i++)
    {
        strcpy(foundData[i].nama, "");
    }

    // the main searching algorithm
    int foundDataIndex = 0;
    for (int i = 0; i < (sizeof(listRoko) / sizeof(listRoko[0])); i++)
    {
        if (strstr(listRoko[i].nama, keyword) != NULL)
        {
            foundData[foundDataIndex] = listRoko[i];
            foundDataIndex++;
        }
    }

    // print search results to console
    if (foundData[0].nama[0] == '\0')
    {
        puts("\nPencarian tidak ditemukan.");
    }
    else
    {
        puts("\nHasil pencarian:");
        for (int i = 0; i < (sizeof(foundData) / sizeof(foundData[0])); i++)
        {
            if (foundData[i].nama[0] != '\0')
            {
                printf("%d) %s\n", i + 1, foundData[i].nama);
            }
        }
    }

    printf("\n");
    for (int i = 0; i < (sizeof(foundData) / sizeof(foundData[0])); i++)
    {
        if (foundData[i].nama[0] != '\0')
        {
            printf("Input '%d' untuk melihat detail %s\n", i + 1, foundData[i].nama);
        }
    }
    puts("Input '0' untuk kembali\n");

    int input;
    printf("Input: ");
    scanf("%d", &input);

    switch (input)
    {
    case 0:
        dashboard();
        break;
    default:
        detail(
            foundData[input - 1].nama,
            foundData[input - 1].manufaktur,
            foundData[input - 1].jumlahBatang,
            foundData[input - 1].hargaPerBatang,
            foundData[input - 1].hargaPerBungkus,
            foundData[input - 1].hargaPerSlop,
            foundData[input - 1].bisaDiketeng,
            foundData[input - 1].isLegal,
            foundData[input - 1].isIlegal,
            foundData[input - 1].isKretek,
            foundData[input - 1].isFilter,
            foundData[input - 1].isKlik);
        break;
    }
}

void detail(
    char nama[],
    char manufaktur[],
    int jumlahBatang,
    int hargaPerBatang,
    int hargaPerBungkus,
    int hargaPerSlop,
    bool bisaDiketeng,
    bool isLegal,
    bool isIlegal,
    bool isKretek,
    bool isFilter,
    bool isKlik)
{
    printf("\e[1;1H\e[2J");
    puts("**************************DETAIL PRODUK********************************\n");
    printf("Nama rokok: %s\n", nama);
    printf("Manufaktur: %s\n", manufaktur);
    printf("Jumlah Batang: %d\n", jumlahBatang);
    printf("Harga per Batang: Rp%d\n", hargaPerBatang);
    printf("Harga per Bungkus: Rp%d\n", hargaPerBungkus);
    printf("Harga per Slop: Rp%d\n", hargaPerSlop);
    printf("Bisa diketeng? %s\n", bisaDiketeng ? "Ya" : "Tidak");
    printf("Legal? %s\n", isLegal ? "Ya" : "Tidak");
    printf("Ilegal? %s\n", isIlegal ? "Ya" : "Tidak");
    printf("Kretek? %s\n", isKretek ? "Ya" : "Tidak");
    printf("Filter? %s\n", isFilter ? "Ya" : "Tidak");
    printf("Klik? %s\n\n", isKlik ? "Ya" : "Tidak");

    puts("Input '1' untuk tambah ke keranjang");
    puts("Input '0' untuk kembali");

    printf("\n");
    int input;
    printf("Input: ");
    scanf("%d", &input);
    getchar();

    switch (input)
    {
    case 1:
        addToCart(nama);
    case 0:
        search();
        break;
    default:
        break;
    }
}

void addToCart(char nama[])
{
    printf("\e[1;1H\e[2J");
    printf("\nBerhasil menambahkan %s ke keranjang.\n\n", nama);

    puts("Input '1' untuk lanjut mencari");
    puts("Input '0' untuk kembali ke dashboard\n");

    int input;
    printf("Input: ");
    scanf("%d", &input);
    getchar();

    switch (input)
    {
    case 1:
        search();
        break;
    case 0:
        dashboard();
        break;
    default:
        break;
    }
}