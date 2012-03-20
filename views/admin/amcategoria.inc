<div class="categoria">
	<div class="mensaje">
		<input  type="hidden" name="mensaje"/> 
	</div> 

<div class="titulo">Editar Categoria</div> 
<!--
  <div class="menus">
    <ul class="menu">
        <li><a href="" class="actual">Categoria 1</a></li>
        <li><a href="">Categoria 2</a></li>
        <li><a href="">Categoria 3</a></li>
		<li><a href="">Categoria 4</a></li>
        <li><a href="">Categoria 5</a></li>
        <li><a href="">Categoria 6</a></li>
    </ul>
    </div>
-->
<center>
<span class="titulocat"><?php if($new)echo "Ingrese Categoria"; else echo "Edicion de ".$catgry->nombre; ?></span>
<form action="/?cat=abmcategorias" method="POST">
<input type="hidden" name="id" value="<?php if($new)echo "0"; else echo $catgry->id; ?>"/>
	<table>
		<tr>
			<td><span class="texto">Nombre:</span></td>
			<td><input type="text" name="nombre" value="<?php if($new)echo ""; else echo $catgry->nombre; ?>"/></td>
		</tr>
		<tr>
			<td colspan="2"><input type="submit" name="<?php if($new)echo "new"; else echo "edit"; ?>" /></td>
		</tr>
	</table>
</form>

</center>
</div>
