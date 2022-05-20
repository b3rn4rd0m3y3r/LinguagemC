<html>
	<head>
		<title>Conn</title>
		<meta name="author" content="Berna">
		<meta http-equiv="Content-Type" content="text/html;charset=iso-8859-1">
		<meta name="description" content="HTML5">
	</head>
	<?php
		try {
			$conn = new PDO('sqlite:Banco.db3');
			$conn->setAttribute(PDO::ATTR_ERRMODE, $conn::ERRMODE_EXCEPTION);
			} catch(PDOException $e) {
				echo $e->getMessage();
			}
	?>
</html>
