<form enctype="multipart/form-data"  method="POST">
<input type="file" name="foto" />
<input type="checkbox" name="f" />
<input type="submit" name="fot" />
</form>
<pre>
<?php
var_dump($_POST);
?>
</pre>
<pre>
<?php
var_dump($_FILES);
?>
</pre>