#include <unistd.h>
#include <stdio.h>

int	main(void)
{
	char *tt;

	tt = "sd bd ff";  /* tt pointeri suanda s harfinin bulundugu 1 bytelik
						adres blogunu isaret ediyor, isaret edilen adres'in
						bir sonraki adresinde s'den sonra gelen d harfi bulunmakta */

	/* cift tirnak " " arasinda yazilan karakterler ard arda gelen adreslere
	   yazilacak sekilde stack memory alanina statik olarak kaydedilir
	   ve sonuna '\0' karakteri eklenir f'nin adresi + 1 = '\0'  */

	tt = tt + 3; /* tt pointerin isaret ettigi adrese 3 ekler
					ve orada b harfi bulunmaktadir.
					artik pointer baska bir adresi isaret etmektedir*/
	printf ("%s\n", tt); /* ifadesi ise tt'nin isaret ettigi adresten baslayarak
						null gorene kadar her karakteri teker teker print eder.
						tt pointer olarak sadece baslangic adresini belirtir
						gerisini printf fonksiyonu halleder */
	int i = 0;
	while (tt[i] != '\0')
	{
		write(1,&tt[i],1); /* printf fonksiyonu esasinda arka
								planda bu islemi gerceklestiriyor.
								*/
		i++;
	}

	/* sonuc olarak tt[0] hafizadan silinmiyor, sadece print etmiyoruz.
		printf fonksiyonuna tt[3] adresinden baslayarak her 8 bitlik bloktaki binary
		kodunu ascii'ye gore karaktere cevir onu ekrana yazdir adresi 1 arttir
		ve yine ayni islemi yap. taa ki null ifadesi gorene kadar. */

}
