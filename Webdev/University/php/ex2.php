<?php
    $dbhandle=mysqli_connect("localhost:3000","root","","claimitems");  
    $name=$_POST["name"];
    $email=$_POST["email"];
    $option=$_POST["opt"];
    if ($option==1) $option = "I found";
    else $option = "I lost";
    
    $description=$_POST["message"];
    $select=$_POST["select"];

    $query="insert into claiminfo values('$name','$email','$option','$description','$select');";
    mysqli_query($dbhandle,$query)or die(mysqli_error($dbhandle));

    if(isset($_POST['display'])){
        $q="select * from claiminfo;";
        $result=mysqli_query($dbhandle,$q) or die (mysqli_error($dbhandle)); 
        while($r=mysqli_fetch_assoc($result)){
            print($r['studentname']."          ".$r['email']."          ".$r['option']."          ".$r['message']."          ".$r['select']);
        }
    }   
    
    mysqli_close($dbhandle);

?>
<html>
    <body> 
        <table style="margin-left:50%">
            <h1 style="margin-left:50%">Lost/Found Items</h1>
            <form method="post" action="http://localhost:3000/ex2.php">
            <tr>
                <td>
                    <p>please fill out your claim</p>
                </td>
            </tr>
            <tr>
                <td>
                    Student Name:<input type="text" name="name" required /> 
                </td>
            </tr>
            <tr>
                <td>
                      E-mail Address:<input type="email" name="email" required/>
                </td>
            </tr>
            <tr>
                <td>
                        I found <input type="radio" name="opt" value="1"/>
                        lost <input type="radio" name="opt" value="0"/>
                        the item described below:
                </td>
                
            </tr> 
            <tr>
                <td>
                        <textarea name="message" rows="10" cols="30" placeholder="No more than 256 characters"></textarea>
                </td>
                
            </tr>  
            <tr>
                <td>
                        at the campus:<select id="color" name="select">
                        <option value="Entrance">Entrance</option>
                        <option value="garbage">grabage</option>
                        <option value="form">form</option>
                        </select>
                </td>
                
            </tr>  
            <tr>
                <td>
                         <input type="submit" name="claim" value='claim'> 
                        <input type="reset"  value='clear All'> 
                        <input type="button"  name="display" value='display'> 
                </td>
                
            </tr>  
            
           
       </form>  
            </table>
</body> 
</html>