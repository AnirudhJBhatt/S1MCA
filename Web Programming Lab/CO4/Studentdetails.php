<?php
    $conn=mysqli_connect("localhost","root","","college");
?>
<html>
<head>
    <title>Student Data</title>
    <link href="https://cdn.jsdelivr.net/npm/bootstrap@5.3.2/dist/css/bootstrap.min.css" rel="stylesheet"
        integrity="sha384-T3c6CoIi6uLrA9TneNEoa7RxnatzjcDSCmG1MXxSR1GAsXEV/Dwwykc2MPK8M2HN" crossorigin="anonymous">
    <script src="https://cdn.jsdelivr.net/npm/bootstrap@5.3.2/dist/js/bootstrap.bundle.min.js"
        integrity="sha384-C6RzsynM9kWDrMNeT87bh95OGNyZPhcTNXj1NW7RuBCsyN/o0jlpcV8Qyq46cDfL"
        crossorigin="anonymous"></script>
</head>
<body style="background-color: #FFFFCC;">
    <form>
        <div class="d-flex justify-content-center mt-3">
            <input type="submit" class="btn btn-success" value="View Details" name="Submit">
        </div>
    </form>
</body>
</html>
<?php
    if(isset($_REQUEST["Submit"])){
        $query="SELECT * FROM student";
        $run=mysqli_query($conn,$query);
        echo "<div class='container d-flex justify-content-center'>
                <table class='table table-striped table-light table-hover table-bordered border-dark'>
                    <tr>
                        <th>Roll No</th>
                        <th>Name</th>
                        <th>Course</th>
                        <th>Semester</th>
                        <th>Batch</th>
                    </tr>";
        while($row=mysqli_fetch_array($run)){
            echo "<tr>";
            echo "<td>".$row['Stud_ID']."</td> <td>".$row['Stud_Name']."</td> <td>".$row['Stud_Course']."</td>  <td>".$row['Stud_Semester']."</td> <td>".$row['Stud_Batch']."</td>";
            echo "</tr>";
        }
        echo "</table></div>";
    }
?>