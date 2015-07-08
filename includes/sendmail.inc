<?php
///////////////////////////
// SEND MAIL for support //
///////////////////////////


$recipient = "denizb@gmail.com";  
$nameFrom = $_POST['fullname'];
$emailFrom = $_POST['email'];
$phone = $_POST['phone'];

$message = $_POST['message'];

$subject = "Reservation from Myndos.com";


//Send Email


	$extra = "From: $nameFrom < $emailFrom >\r\nReply-To: $emailFrom\r\n";
	$body = "Telefon: ".$phone."\r\n\r\nİsim".$nameFrom."\r\n\r\n".$message;
	
	mail ($recipient, $subject, $supportBody, $extra);
	
	
// Send Confirmation Email to sender
/*		
		
	$confirmation .= "Dear ".$nameFrom.",\r\n\r\n\r\n";
	$confirmation .= "Thank you for contacting Helix Studios.\r\nYour message has been received and will be reviewed and replied to by the appropriate department within the next 24-48 hours. \r\n\r\n";
	$confirmation .= "Thanks again for your e-mail.  We appreciate your business.\r\n\r\n";	
	$confirmation .= "Sincerely,\r\n\r\n";
	$confirmation .= "The Helix Studios Support Team\r\n\r\n";
	$confirmation .= "-----\r\n\r\n";
	$confirmation .= "Please note that if you are inquiring about becoming a model for us, you can submit your model application here:\r\n\r\n";
	$confirmation .= "http://www.helixstudios.net/modelapps/\r\n";
	
	
	$recipient2 = $emailFrom;
	$subject2 = "Re: ".$subject;
	$extra2 = "From: Helix Studios Support < $recipient >\r\nReply-To: $recipient\r\n";
	
	mail ($recipient2, $subject2, $confirmation, $extra2);
*/	
   		
?>