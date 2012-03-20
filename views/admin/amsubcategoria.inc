<?php if($_POST["cat"] != 0){ ?>

<br/>
<div class="categoria">
	<div class="mensaje">
		<input  type="hidden" name="mensaje"/> 
	</div> 
		
<div class="titulo">Editar Subcategorias</div> 

<center>
<span class="titulocat"><?php if($new)echo "Ingrese Subcategoria"; else echo "Edicion de ".$catgry->nombre; ?></span>
<form action="/?cat=abmsubcategorias" method="POST">
<input type="hidden" name="id" value="<?php if($new)echo "0"; else echo $catgry->id; ?>"/>
	<table>
		<tr>
			<td><span class="texto">Nombre:</span></td>
			<td><input type="text" name="nombre" value="<?php if($new)echo ""; else echo $catgry->nombre; ?>"/></td>
		</tr>
		<tr>
			<td><span class="texto">Categoria:</span></td>
			<td>
			<select name="categoria">
			<?php if(!$new){$x=new categoria($catgry->categoria);
			echo '<option value="'.$x->id.'">'.$x->nombre.'</option>';
			}else{
			$x=new categoria($_POST["cat"]);
			echo '<option value="'.$x->id.'">'.$x->nombre.'</option>';
			}?>
			<?php foreach($forcats as $c){ ?>
			<option value="<?php echo $c->id; ?>"><?php echo $c->nombre; ?></option>
			<?php } ?>
			</select>
			</td>
		</tr>
		<tr>
			<td><span class="texto">Descripcion:</span></td>
			<td></td>
		</tr>
		<tr>
			<td colspan="2"><textarea name="descripcion"><?php if($new)echo ""; else echo $catgry->descripcion; ?></textarea></td>
		</tr>
		<tr>
			<td colspan="2"><input type="submit" name="<?php if($new)echo "new"; else echo "edit"; ?>" /></td>
		</tr>
	</table>
</form>

</center>
	
</div>
<?php }else{ ?>

Debe ingresar una categoria antes de ingresar una subcategoria

<?php } ?>