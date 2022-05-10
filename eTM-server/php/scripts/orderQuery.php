<?php

$db_host ='localhost';
$db_port ='3306';
$db_user = 'root';
$db_pass = '';
$db_name = 'etm';

$conn = mysqli_connect($db_host,$db_user,$db_pass)OR die('E99');
		mysqli_select_db($conn, $db_name);
	
$result = $conn->query("INSERT INTO order () VALUES ('".$_GET["source"]."')");
INSERT INTO order (columns) VALUES ()
if ($result->num_rows > 0) 
	{
	// echo "\n";
	while($row = $result->fetch_assoc())
		{echo $row["type"];}
		//{while ($property = $result->fetch_field())	
		// echo $property->name . " : " . $row[$property->name]. " | ";}
		//if ()
		//echo ;}
	
	} 
else 
	{echo "000";}

$conn->close();
?>
