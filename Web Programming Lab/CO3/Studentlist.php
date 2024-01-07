<html>
    <head>
        <link href="https://cdn.jsdelivr.net/npm/bootstrap@5.3.2/dist/css/bootstrap.min.css" rel="stylesheet" integrity="sha384-T3c6CoIi6uLrA9TneNEoa7RxnatzjcDSCmG1MXxSR1GAsXEV/Dwwykc2MPK8M2HN" crossorigin="anonymous">
        <script src="https://cdn.jsdelivr.net/npm/bootstrap@5.3.2/dist/js/bootstrap.bundle.min.js" integrity="sha384-C6RzsynM9kWDrMNeT87bh95OGNyZPhcTNXj1NW7RuBCsyN/o0jlpcV8Qyq46cDfL" crossorigin="anonymous"></script>
    </head>
<body style="background-color: #FFFFCC;">
    <div class="container mt-3 d-flex justify-content-center">
        <div class="card w-100">
            <h5 class="card-header text-bg-primary text-center">STDUENT ENTRY FORM</h5>
            <div class="card-body text-bg-light">
                <form>
                    <div class="row mb-3">
                        <label class="col-sm-5 col-form-label">Enter names of students</label>
                        <div class="col-sm-5">
                            <input type="text" class="form-control" name="names">                    
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
        $names=$_REQUEST['names'];
        $nameslist=explode(",",$names);
?>
        <div class='container mt-3 d-flex justify-content-center'>
            <table class='table table-bordered border-dark w-100 text-center'>        
                <tr>
                    <th class='table-dark' colspan='2'>STUDENTS LIST</th>
                </tr>
                <tr>
                    <td class='w-25'>Original Array</td>
                    <td class='w-75'><?php print_r($nameslist); ?></td>
                </tr>
                <tr>
                    <td>Array after sorting using asort()</td>
                    <td><?php asort($nameslist); print_r($nameslist); ?></td>
                </tr>
                <tr>
                    <td>Array after sorting using arsort()</td>
                    <td><?php arsort($nameslist); print_r($nameslist); ?></td>
                </tr>
            </table>
        </div>
<?php
    }
?>