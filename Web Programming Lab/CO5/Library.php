<?php
    $conn=mysqli_connect("localhost","root","","college");
?>
<html>

<head>
    <title>MITS Library</title>
    <link href="https://cdn.jsdelivr.net/npm/bootstrap@5.3.2/dist/css/bootstrap.min.css" rel="stylesheet"
        integrity="sha384-T3c6CoIi6uLrA9TneNEoa7RxnatzjcDSCmG1MXxSR1GAsXEV/Dwwykc2MPK8M2HN" crossorigin="anonymous">
    <script src="https://cdn.jsdelivr.net/npm/bootstrap@5.3.2/dist/js/bootstrap.bundle.min.js"
        integrity="sha384-C6RzsynM9kWDrMNeT87bh95OGNyZPhcTNXj1NW7RuBCsyN/o0jlpcV8Qyq46cDfL"
        crossorigin="anonymous"></script>
    <style>
        body{
            background-color: aquamarine;
        }
    </style>
</head>

<body>
    <div class="header text-center mt-2">
        <img src="https://companieslogo.com/img/orig/MUTHOOTFIN.NS-276f7615.png?t=1603305807" width="100" height="50"
            alt>
        <h1 style="color: red; font-family: Arial, Helvetica, sans-serif;">MUTHOOT INSTITUTE OF TECHNOLOGY AND SCIENCE</h1>
        <p style="color: red;">A premier engineering college in the state, located at Kochi</p>
    </div>
    <div class="d-flex justify-content-center mt-3">
        <div class="container border w-50" style="background-color: antiquewhite;";>
            <form action="" method="POST">
                <div class="text-center mt-2">
                    <h3>BOOK ENTRY/SEARCH FORM</h3>
                </div>
                <div class="row">
                    <div class="col">
                        <label>Book ID</label>
                        <input type="text" class="form-control" name="B_ID">
                    </div>
                    <div class="col">
                        <label>Book Title</label>
                        <input type="text" class="form-control" name="B_Title">
                    </div>
                </div>
                <div class="row mt-3">
                    <div class="col">
                        <label>Book Author</label>
                        <input type="text" class="form-control" name="B_Author">
                    </div>
                    <div class="col">
                        <label>Book Edition</label>
                        <input type="text" class="form-control" name="B_Edition">
                    </div>
                </div>
                <div class="row mt-3">
                    <div class="col">
                        <label>Book Type</label>
                        <input type="text" class="form-control" name="B_Type">
                    </div>
                    <div class="col">
                        <label>Book Publisher</label>
                        <input type="text" class="form-control" name="B_Publisher">
                    </div>
                </div>
                <div class="text-center mt-3">
                    <input type="submit" class="btn btn-success" value="Submit" name="Submit">
                    <input type="submit" class="btn btn-primary" value="Search" name="Search">
                    <input type="submit" class="btn btn-danger" value="Clear" name="Clear">
                </div>
            </form>
        </div>
        
            
    </div>
</body>
</html>
<?php
    if(isset($_REQUEST['Submit'])){
        $B_ID=$_POST['B_ID'];
        $B_Title=$_POST['B_Title'];
        $B_Author=$_POST['B_Author'];
        $B_Edition=$_POST['B_Edition'];
        $B_Type=$_POST['B_Type'];
        $B_Publisher=$_POST['B_Publisher'];

        $query="INSERT INTO book VALUES('$B_ID','$B_Title','$B_Author','$B_Edition','$B_Type','$B_Publisher')";
        $run=mysqli_query($conn,$query);

        if($run){
            echo "<div class='container w-50 mt-3'><div class='alert alert-success'>Successfully Inserted</div></div>";
        }
        else{            
            echo "<div class='container w-50 mt-3'><div class='alert alert-danger'>Failed to Insert</div></div>";
        }
    }
    if(isset($_REQUEST['Search'])){
        $B_Author=$_POST['B_Author'];

        $query="SELECT * FROM book WHERE B_Author='$B_Author'";
        $run=mysqli_query($conn,$query);
        $row=mysqli_fetch_array($run);

        echo "<div class='container d-flex justify-content-center mt-3'>
                <table class='table table-striped table-hover table-bordered'>
                    <tr>
                        <th>Book ID</th>
                        <th>Book Title</th>
                        <th>Book Author</th>
                        <th>Book Edition</th>
                        <th>Book Type</th>
                        <th>Book Publisher</th>
                    </tr>";
        echo "<tr>";
        echo "<td>".$row['B_ID']."</td> <td>".$row['B_Title']."</td> <td>".$row['B_Author']."</td>  <td>".$row['B_Edition']."</td> <td>".$row['B_Type']."</td> <td>".$row['B_Publisher']."</td>";
        echo "</tr>";
        echo "</table></div>";
    }
?>