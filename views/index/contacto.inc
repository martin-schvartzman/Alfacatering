<?php if(!$sent){ ?>
<div class="formtop"></div>
<form action="/?cat=contacto" method="POST">
<fieldset id="form">

<p class="titulo">Contacto</p>
<p class="texto">
Envienos su consulta o pedido  </p>

<div style="padding-left:40px;">
Nombre
<input style="color:black;margin-left:44px;" type="text" name="nombre" size="40">

</p>

<p>Telefono 
<input  style="color:black;margin-left:40px;" type="text" name="telefono" size="40">
</p>

<p>E-mail
<input type="text" style="color:black;margin-left:53px;"  name="email" size="40">
 </p>
</div>
<p>
<textarea style="color:black;" name="your-message" id="comment" cols="40" rows="10"></textarea>
</p>


<p>
<input style="cursor:pointer;" type="submit" name="mail" class="btn" value="Enviar" />
</p>
</fieldset>
</form>


<?php }else{ ?>
<div class="textoenvio">
Gracias por sus comentarios </div><?php //echo $n; ?>
<?php } ?>

