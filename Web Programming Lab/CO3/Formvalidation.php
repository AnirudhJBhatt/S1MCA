<html>
<head>
    <title>PHP Form Validation</title>
    <link href="https://cdn.jsdelivr.net/npm/bootstrap@5.3.2/dist/css/bootstrap.min.css" rel="stylesheet"
        integrity="sha384-T3c6CoIi6uLrA9TneNEoa7RxnatzjcDSCmG1MXxSR1GAsXEV/Dwwykc2MPK8M2HN" crossorigin="anonymous">
    <script src="https://cdn.jsdelivr.net/npm/bootstrap@5.3.2/dist/js/bootstrap.bundle.min.js"
        integrity="sha384-C6RzsynM9kWDrMNeT87bh95OGNyZPhcTNXj1NW7RuBCsyN/o0jlpcV8Qyq46cDfL"
        crossorigin="anonymous"></script>
    <style>
        body {
            background-color: antiquewhite;
            text-align: justify;
        }
        h2 {
            color: red;
            font-family: cursive;
            font-weight: bold;
        }
        span {
            color: red;
            font-style: italic;
        }
    </style>
</head>
<?php
$nameerror=$gendererror=$addresserror=$emailerror=$phoneerror=$courseerror="";
if(isset($_POST['Submit'])){
    $name=$_POST['name'];
    $address=$_POST['address'];
    $email=$_POST['email'];
    $phone=$_POST['phone'];
    
    if(empty($name)){
        $nameerror="Name cannot be empty";
    }
    else if(!preg_match("/^[A-Za-z]*$/",$name)){
            $nameerror="Invalid name";
    }

    if(empty($address)){
        $addresserror="Address cannot be empty";
    }

    if(!filter_var($email,FILTER_VALIDATE_EMAIL)){
        $emailerror="Invalid Email";
    }
    
    if(strlen($phone)!=10){
        $phoneerror="Invalid Mobile Number";
    }

    if(!isset($_POST['gender'])){
        $gendererror="Select a gender";
    }

    if(isset($_POST['address'])){
        $address="Address cannot be empty";
    }   

    if(!isset($_POST['course'])){
        $courseerror="Select a course";
    }
}
?>
<body>
    <div class="container mt-3">
        <h2 class="text-center">STUDENT REGISTRATION FORM</h2>
        <div class="container mt-3">
            <form method="POST">
                <div class="row mt-3">
                    <div class="col">
                        <label>Name</label>
                        <input type="text" class="form-control" name="name">
                        <span><?php echo $nameerror; ?></span>
                    </div>
                    <div class="col">
                        <label>DOB</label>
                        <input type="date" class="form-control" name="dob">
                    </div>
                </div>
                <div class="row mt-3">
                    <div class="col">
                        <label>Gender</label>
                        <div class="form-check form-check-inline mt-4">
                            <input class="form-check-input" name="gender" type="radio">
                            <label>Male</label>
                        </div>
                        <div class="form-check form-check-inline">
                            <input class="form-check-input" name="gender" type="radio">
                            <label>Female</label>
                        </div>
                        <span><?php echo $gendererror; ?></span>
                    </div>
                    <div class="col">
                        <label class="form-label">Address</label>
                        <textarea class="form-control" rows="3" name="address"></textarea>
                        <span><?php echo $addresserror; ?></span>
                    </div>
                </div>
                <div class="row mt-3">
                    <div class="col">
                        <label>Email ID</label>
                        <input type="text" class="form-control" name="email">
                        <span><?php echo $emailerror; ?></span>
                    </div>
                    <div class="col">
                        <label>Phone No</label>
                        <input type="number" class="form-control" name="phone">
                        <span><?php echo $phoneerror; ?></span>
                    </div>
                </div>
                <div class="row mt-3">
                    <div class="col">
                        <label>Course</label>
                        <div class="form-check form-check-inline mt-4">
                            <input class="form-check-input" type="checkbox" name="course">
                            <label>Btech</label>
                        </div>
                        <div class="form-check form-check-inline">
                            <input class="form-check-input" type="checkbox" name="course">
                            <label>Mtech</label>
                        </div>
                        <div class="form-check form-check-inline">
                            <input class="form-check-input" type="checkbox" name="course">
                            <label>MCA</label>
                        </div>                        
                        <span><?php echo $courseerror; ?></span>
                    </div>
                    <div class="col">
                        <label>Branch</label>
                        <select class="form-select" name="branch">
                            <option>CSE</option>
                            <option>CSE AI</option>
                            <option>AI&DS</option>
                            <option>ME</option>
                            <option>EEE</option>
                            <option>ECE</option>
                            <option>CY</option>
                            <option>MCA</option>
                        </select>                        
                    </div>
                </div>
                <div class="row mt-3 text-center">
                    <div class="col">
                        <input type="Submit" class="btn btn-success" name="Submit">
                        <input type="Reset" class="btn btn-success" onclick=window.location.reload();>
                    </div>
                </div>
            </form>
        </div>
    </div>
</body>
</html>