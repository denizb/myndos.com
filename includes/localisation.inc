<?php

define("DEFAULT_LANG", "tr");



	switch ($_GET['lang']) {
    case 'en':
        $lang = "en";
        break;
    case 'tr':
        $lang = "tr";
        break;
    case 'de':
        $lang = "de";
        break;
    case 'fr':
        $lang = "fr";
        break;
    default:
        $lang = DEFAULT_LANG;
        break;
      }




function getLocalString($string){
	
	global $dictionary;
	global $lang;
	
	if ($dictionary[$string][$lang] <> "") {
		return $dictionary[$string][$lang];
	} else {
		return $dictionary[$string][DEFAULT_LANG];
	}
	
}


$dictionary = array();

$dictionary['Home']['en'] = 'Home';
$dictionary['Home']['tr'] = 'Anasayfa';
$dictionary['Home']['fr'] = 'Acceil';
$dictionary['Home']['de'] = '';

$dictionary['Accommodations']['en'] = 'Accommodations';
$dictionary['Accommodations']['tr'] = 'Odalar';
$dictionary['Accommodations']['fr'] = 'Les Chambres';
$dictionary['Accommodations']['de'] = 'Unterkunft';

$dictionary['Map']['en'] = 'Map';
$dictionary['Map']['tr'] = 'Harita';
$dictionary['Map']['fr'] = 'Carte';
$dictionary['Map']['de'] = 'Karte';

$dictionary['Tour']['en'] = 'Virtual Tour';
$dictionary['Tour']['tr'] = 'Sanal Tur';
$dictionary['Tour']['fr'] = 'Virtual Tour';
$dictionary['Tour']['de'] = 'Virtual Tour';

$dictionary['Reservations']['en'] = 'Reservations';
$dictionary['Reservations']['tr'] = 'Rezervasyon';
$dictionary['Reservations']['fr'] = 'Réservations';
$dictionary['Reservations']['de'] = 'Reservierungen';



$dictionary['Contact Us']['tr'] = 'Bize Ulaşın';
$dictionary['Contact Us']['en'] = 'Contact Us';
$dictionary['Contact Us']['fr'] = 'Contactez-nous';
$dictionary['Contact Us']['de'] = 'Kontaktieren Sie uns';

$dictionary['breakfast']['tr'] = "Kahvaltı";
$dictionary['breakfast']['en'] = "Breakfast";
$dictionary['breakfast']['fr'] = "Petit déjeuner";
$dictionary['breakfast']['de'] = "Frühstück";

// Home Page Main Body

$dictionary['header1']['tr'] = "";
$dictionary['header1']['en'] = "";
$dictionary['header1']['fr'] = "";
$dictionary['header1']['de'] = "";


$dictionary['text1']['tr'] = "Eski adıyla \"Club Gümüşlük\". \"Haşmet'in yeri\" diye de bilinirdi bir zamanlar. Mimar Tevfik Bilgin'in kapsamlı onarım ve yenileme çalışmalarından sonra misafirlerini ağırlamaya Temmuz 2012'de başladı.";

$dictionary['text1']['en'] = "Myndos Bed and Breakfast was previously known as \"Club Gümüşlük\" or \"Haşmet'in place\". Now under the new management and with the renovations made by the local architect Tevfik Bilgin, Myndos Bed and Breakfast has re-opened in July 2012. ";
$dictionary['text1']['fr'] = "";
$dictionary['text1']['de'] = "";

$dictionary['rooms_subtitle']['tr'] = 'Odaların tümü sıcak sulu, klimalı';
$dictionary['rooms_subtitle']['en'] = 'All our rooms have hot water and air conditioning';




//$dictionary['text2']['tr'] = "Gümüşlük'te herşeyin yanında ama herşeyden uzakta sakin, sessiz, gürültüsüz bir mekan arayanların yeri. Özellikle yerel ve doğal ürünlerle hazırlanmış kahvaltısı, pek çoğumuzun  unuttuğu tadları yeniden hatırlamamızı sağlayacak türden.";

$dictionary['text2']['tr'] = "Sıcak suyun aktığı, klimaların soğuttuğu, çarşafların ve havluların tertemiz olduğu, mandalin, zakkum ve begonvil ağaçları arasındaki  küçücük odaları dinlenmek için size gereken ortamı sunuyor. ";

$dictionary['text2']['en'] = "Myndos Bed and Breakfast could be named among the one of the most serene, beautiful, and relaxing places to stay in the Bodrum Penensula. It will bring back traditions that will delight the senses, and look towards the future as it creates a brand new atmosphere that adds color, falvour and emotions to the village of Gümüşlük. Come spend a weekend, a week or a month and forget your troubles, enjoy the sun and beach, the relaxing and welcoming garden, enjoy home made and localy grown flavours of the day, socialize, find peace and solitude or tour the ruins in this quaint historic Southern turkish Village formerley named Myndos by the ancient Greek civilizations that lived here thousands of years ago. ";
$dictionary['text2']['fr'] = "";
$dictionary['text2']['de'] = "";


// Home Blurb under 3 categories

$dictionary['homeblurb1']['tr'] = "Otelimizde 20 oda ve 2 adet suit yataklı bulunmaktadir.";
$dictionary['homeblurb1']['en'] = "There are 22 rooms available.";
$dictionary['homeblurb1']['fr'] = "";
$dictionary['homeblurb1']['de'] = "";

$dictionary['homeblurb2']['tr'] = "Doğal ürünlerin özenle seçildiği zengin çeşitli bir kahvaltıya davet ediyoruz konuklarımızı.";
$dictionary['homeblurb2']['en'] = "We serve localy grown produce, dairy and eggs from our own hen house.";
$dictionary['homeblurb2']['fr'] = "";
$dictionary['homeblurb2']['de'] = "";

$dictionary['homeblurb3']['tr'] = "Havadan çekilmis fotolar";
$dictionary['homeblurb3']['en'] = "Aereal photos and maps of Gumusluk and our Bed and Breakfast";
$dictionary['homeblurb3']['fr'] = "";
$dictionary['homeblurb3']['de'] = "";


$dictionary['make_reservation']['tr'] = "Odanızı Ayırın";
$dictionary['make_reservation']['en'] = "Make A Reservation";
$dictionary['make_reservation']['fr'] = "";
$dictionary['make_reservation']['de'] = "";


// Rooms


$dictionary['text3']['tr'] = "Otelimizde 2 adet tek kişilik yataklı 10 oda ve 1 adet çift kişilik yataklı 10 oda olmak üzere toplam 20 oda ve 2 adet suit. Tercih sizlerin.";
$dictionary['text3']['en'] = "Our hotel consists of 10 rooms with 2 single beds, 10 rooms with queen sized beds and 2 suites. The choice is yours";
$dictionary['text3']['fr'] = "";
$dictionary['text3']['de'] = "";


$dictionary['text4']['tr'] = "Myndos Bed & Breakfast odaları mandalin bahçesinin içinde. İki tip odamız var. İki tane tek kişilik yatağı olanlar ve bir tane çift kişilik yatağı olanlar. Odaların tümüsıcak su, klimalı.";
$dictionary['text4']['en'] = "Myndos Bed & Breakfast rooms are located in a tangerine garden by the sea side. Each room has has a private bathroom, continuous hot water and air conditoning.";
$dictionary['text4']['fr'] = "";
$dictionary['text4']['de'] = "";



$dictionary['header2']['tr'] = "Kahvaltı";
$dictionary['header2']['en'] = "Breakfast";
$dictionary['header2']['fr'] = "Petit déjeuner";
$dictionary['header2']['de'] = "Frühstück";

$dictionary['text5']['tr'] = "Doğal ürünlerin özenle seçildiği zengin çeşitli bir kahvaltıya davet ediyoruz konuklarımızı. Sunduğumuz yumurtaların tamamı ve süt ürünleri (bazı peynir çeşitleri dışında) yerli üreticilerin ürünleri. Sebze ve meyvelerimizin de doğal ve organik ürünler olmasını tercih ediyoruz. Tazelik sunduğumuz kahvaltıların en belirleyici özelliği.";
$dictionary['text5']['en'] = "We invite our guests to enjoy a delightful Turkish breakfast with hand picked produce that is localy grown. The eggs we offer for our breakfast and dairy products (excluding certain types of cheese) are all from localy raised animals not treated with anti-biotics, and are from cage free animals. We prefer our fruits and vegetables to be organic and localy grown. Freshness of all our foods is of great importance to us and our patrons. ";
$dictionary['text5']['fr'] = "";
$dictionary['text5']['de'] = "";

$dictionary['Address']['tr'] = "Adres";
$dictionary['Address']['en'] = "Address";
$dictionary['Address']['fr'] = "Adresse";
$dictionary['Address']['de'] = "Adresse";


$dictionary['Your Name']['tr'] = "İsim, Soyisim";
$dictionary['Your Name']['en'] = "Your Name";
$dictionary['Your Name']['fr'] = "";
$dictionary['Your Name']['de'] = "";

$dictionary['Your Email']['tr'] = "E Posta";
$dictionary['Your Email']['en'] = "Your Email";
$dictionary['Your Email']['fr'] = "";
$dictionary['Your Email']['de'] = "";

$dictionary['Phone']['tr'] = "Telefon";
$dictionary['Phone']['en'] = "Your Phone Number";
$dictionary['Phone']['fr'] = "";
$dictionary['Phone']['de'] = "";

$dictionary['Arrival Date']['tr'] = "Geliş Tarihi";
$dictionary['Arrival Date']['en'] = "Arrival Date";
$dictionary['Arrival Date']['fr'] = "";
$dictionary['Arrival Date']['de'] = "";


$dictionary['Check-Out']['tr'] = "Gidiş Tarihi";
$dictionary['Check-Out']['en'] = "Check-Out";
$dictionary['Check-Out']['fr'] = "";
$dictionary['Check-Out']['de'] = "";

$dictionary['Number of Rooms']['tr'] = "Kaç kişi";
$dictionary['Number of Rooms']['en'] = "Number of Rooms";
$dictionary['Number of Rooms']['fr'] = "";
$dictionary['Number of Rooms']['de'] = "";

$dictionary['Your Message']['tr'] = "Mesajınız";
$dictionary['Your Message']['en'] = "Your Message";
$dictionary['Your Message']['fr'] = "";
$dictionary['Your Message']['de'] = "";

$dictionary['Send']['tr'] = "Gönder";
$dictionary['Send']['en'] = "Send";
$dictionary['Send']['fr'] = "";
$dictionary['Send']['de'] = "";

$dictionary['Message Sent']['tr'] = "Mesajınız gönderildi";
$dictionary['Message Sent']['en'] = "Your message was sent";
$dictionary['Message Sent']['fr'] = "";
$dictionary['Message Sent']['de'] = "";


///// Reservations

$dictionary['rates1']['tr'] = "Oda Fiyatlarımız:";
$dictionary['rates1']['en'] = "Our rates:";
$dictionary['rates1']['fr'] = "";
$dictionary['rates1']['de'] = "";

$dictionary['rates-may']['tr'] = "Mayıs, 2013";
$dictionary['rates-may']['en'] = "May 2013";



$dictionary['rates-period1']['tr'] = "Ocak - Mayıs 2015";
$dictionary['rates-period1']['en'] = "January - May 2015";

$dictionary['rates-period2']['tr'] = "Mayıs - 14 Haziran 2015	";
$dictionary['rates-period2']['en'] = "May through June 14th 2015";

$dictionary['rates-period3']['tr'] = "15 Haziran - Eylül 2015";
$dictionary['rates-period3']['en'] = "June 15th through September 2015";

$dictionary['rates-period4']['tr'] = "Ekim - Aralık 2015";
$dictionary['rates-period4']['en'] = "October through December 2015";

$dictionary['rates-description']['tr'] = "2 kişilik oda + kahvaltı";
$dictionary['rates-description']['en'] = "Room for 2 guests + breakfast";

$dictionary['rates-may-price']['tr'] = "2 kişilik oda + kahvaltı: 120 TL";
$dictionary['rates-may-price']['en'] = "Room for 2 guests + breakfast: 120 TL";

$dictionary['rates-june-price']['tr'] = "2 kişilik oda + kahvaltı:  135 TL";
$dictionary['rates-june-price']['en'] = "Room for 2 guests + breakfast: 135 TL";

$dictionary['rates-july-price']['tr'] = "2 kişilik oda + kahvaltı:  165 TL";
$dictionary['rates-july-price']['en'] = "Room for 2 guests + breakfast: 165 TL";

$dictionary['rates-extra-bed']['tr'] = "1 ek çocuk yatagı:  +15 TL";
$dictionary['rates-extra-bed']['en'] = "Extra bed for 1 child: +15 TL";

$dictionary['rates3']['tr'] = "2 kişilik oda + 1 ek çocuk yatagı:  165 TL";
$dictionary['rates3']['en'] = "Room for 2 guests + extra bed for 1 child: 165 TL";

$dictionary['rates3']['tr'] = "2 kişilik oda + 1 ek çocuk yatagı:  165 TL";
$dictionary['rates3']['en'] = "Room for 2 guests + extra bed for 1 child: 165 TL";


$dictionary['rates4']['tr'] = "7 gün ve daha fazla kalışlarda %10 indirim (indirimli fiyatlar sadece 7 Temmuz'a kadar yapılan rezervasyonlar için geçerlidir)";
$dictionary['rates4']['en'] = "There is a 10% discount on our rates for stays of 7 days or longer (This discount is valid for reservations made prior to July 7th)";
$dictionary['rates4']['fr'] = "";
$dictionary['rates4']['de'] = "";
?>