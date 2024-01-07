<html>
    <head>
        <title>Electricity Bill Calculator</title>
        <link href="https://cdn.jsdelivr.net/npm/bootstrap@5.3.2/dist/css/bootstrap.min.css" rel="stylesheet"
            integrity="sha384-T3c6CoIi6uLrA9TneNEoa7RxnatzjcDSCmG1MXxSR1GAsXEV/Dwwykc2MPK8M2HN" crossorigin="anonymous">
        <script src="https://cdn.jsdelivr.net/npm/bootstrap@5.3.2/dist/js/bootstrap.bundle.min.js"
            integrity="sha384-C6RzsynM9kWDrMNeT87bh95OGNyZPhcTNXj1NW7RuBCsyN/o0jlpcV8Qyq46cDfL"
            crossorigin="anonymous"></script>
    </head>
<body style="background-color: #FFFFCC;">
    <div class="container mt-3 d-flex justify-content-center">
        <div class="card w-50">
            <h5 class="card-header text-bg-primary text-center">ELECTRICITY BILL CALCULATOR</h5>
            <div class="card-body text-bg-light">
                <form>
                    <div class="row mb-3">
                        <label class="col-sm-5 col-form-label">Consumer ID</label>
                        <div class="col-sm-5">
                            <input type="text" class="form-control" name="C_ID">                    
                        </div>
                    </div>
                    <div class="row mb-3">
                        <label class="col-sm-5 col-form-label">Consumer Name</label>
                        <div class="col-sm-5">
                            <input type="text" class="form-control" name="C_Name">                    
                        </div>
                    </div>
                    <div class="row mb-3">
                        <label class="col-sm-5 col-form-label">Consumed Units</label>
                        <div class="col-sm-5">
                            <input type="text" class="form-control" name="units">                    
                        </div>
                    </div>
                    <div class="footer text-center">
                        <input type="Submit" name="Submit" value="Submit" class="btn btn-success">
                        <input type="Reset" value="Clear" class="btn btn-danger" onclick=window.location.reload();>
                    </div>
                </form>
            </div>
        </div>
    </div>
</body>
</html>
<?php
    if(isset($_REQUEST['Submit'])){

        $C_ID=$_REQUEST['C_ID'];
        $C_Name=$_REQUEST['C_Name'];
        $units=$_REQUEST['units'];
        
        if($units<50){
            $amt=$units*0.5;
        }
        else if($units<=100){
            $amt=(25+($units-50)*1);
        }
        else{
            $amt=(75+($units-100)*5);
        }
        
        $surcharge=$amt*0.20;
        $meter_rent=100;
        $total=$amt+$surcharge+$meter_rent;

        echo "<div class='container mt-3 d-flex justify-content-center'>
                <table class='table table-bordered border-dark w-50'>";        
        echo "<tr class='text-center'><th class='table-dark' colspan='2'>ELECTRICITY BILL</th></tr>";
        echo "<tr><th class='w-25'>Consumer ID</th> <td class='w-25'>".$C_ID."</td></tr>";
        echo "<tr><th>Consumer Name</th> <td>".$C_Name."</td></tr>";
        echo "<tr><th>Consumed Units</th> <td>".$units."</td></tr>";
        echo "<tr><th>Net Amount</th> <td>".$amt."</td></tr>";
        echo "<tr><th>Surcharge</th> <td>".$surcharge."</td></tr>";
        echo "<tr><th>Meter Rent</th> <td>".$meter_rent."</td></tr>";
        echo "<tr><th>Total</th> <td>".$total."</td></tr>";
        echo "</table></div>";
    }
?>