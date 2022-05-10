<?php

$db_host ='localhost';
$db_port ='3306';
$db_user = 'root';
$db_pass = '';
$db_name = 'etm';

$conn = mysqli_connect($db_host,$db_user,$db_pass)OR die('E99');
		mysqli_select_db($conn, $db_name);
	
$result = $conn->query("SELECT ID, email, hashedPass, type
						FROM users 
						WHERE email = '".$_GET["email"]. "' 
						AND hashedPass = '".$_GET["password"]."'");

if ($result->num_rows > 0)
	{$aaa = $result->fetch_assoc();
	if ($aaa["type"] == 'driver') 
		{echo $aaa["ID"].':0';}
	if ($aaa["type"] == 'company')
		{echo $aaa["ID"].':1';}}
else echo "000";

$conn->close();
?>