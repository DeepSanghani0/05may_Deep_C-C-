<%@ page language="java" contentType="text/html; charset=ISO-8859-1"
    pageEncoding="ISO-8859-1"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="ISO-8859-1">
<title>Insert title here</title>
<style>
 #fashion-content
{
    width: 100%;
    height: auto;
    margin-top: 3%;
}
.login-items
{
    width: 80%;
    height: auto;
    margin: auto;
    margin-top: 5%;
}
.cart-header,
.login-header
{
    border: outset 1px lightgray;
    padding: 10px;
    border-bottom: solid 8px lightgray;
}
.cart-body,
.login-body 
{
    border: outset 1px lightgray;
    padding: 10px;
    display: flex;
    flex-direction: row;
}
.cart-body img 
{
    width: 30%;
}
.login-content img
{
    width: 60%;
    height: auto;
    padding: 25px;
    margin-left: 15%;

}
.login-form
{
    width: 50%;
    height: auto;
    padding: 25px;
}
.login-form input[type="text"],input[type="password"],select,textarea
{
    width: 300px;
    height: auto;
    padding: 10px;
}

.login-form select
{
    width: 322px;
    height: auto;
    padding: 10px;
}
.login-form input[type="submit"]
{
    width: 150px;
    height: auto;
    padding: 10px;
    border: none;
    background-color: #e13ed7;
    color: white;
}
.login-form input[type="reset"]
{
    width: 150px;
    height: auto;
    padding: 10px;
    border: none;
    background-color: red;
    color: white;
}

</style>
</head>
<body>
	
	
		<link
		href="//maxcdn.bootstrapcdn.com/bootstrap/4.0.0/css/bootstrap.min.css"
		rel="stylesheet" id="bootstrap-css">
	<script
		src="//maxcdn.bootstrapcdn.com/bootstrap/4.0.0/js/bootstrap.min.js"></script>
	<script
		src="//cdnjs.cloudflare.com/ajax/libs/jquery/3.2.1/jquery.min.js"></script>
	<!------ Include the above in your HEAD tag ---------->

	<link rel="stylesheet"
		href="https://use.fontawesome.com/releases/v5.0.8/css/all.css">


<jsp:include page="header.jsp"></jsp:include>



		<section id="fashion-content">
        <div class="login-items">
            <div class="login-header"><h2>Contact with Us</h2></div>
            <div class="login-body">
               <div class="login-content">
               <p><b>Our Office Address</b>
                1st Floor, Aditya Complex, Jalaram 2 <br>Street Number 2, above Sbi Bank, nr. Indira Circle, Jala Ram Nagar, Rajkot, Gujarat 360005</p>
                <p><b>Working Hours :</b>8:00 am to 7:30pm</p>
                <p><b>Email us : </b><a href="mailto:hr@info.com">hr@info.com</a></p>
                <p><iframe src="https://www.google.com/maps/embed?pb=!1m18!1m12!1m3!1d3691.6509853762695!2d70.77182607415779!3d22.291206943227166!2m3!1f0!2f0!3f0!3m2!1i1024!2i768!4f13.1!3m3!1m2!1s0x3959ca248c77c099%3A0xdf5ac10af64ac8ee!2sTOPS%20Technologies!5e0!3m2!1sen!2sin!4v1698399313664!5m2!1sen!2sin" width="500" height="250" style="border:0;" allowfullscreen="" loading="lazy" referrerpolicy="no-referrer-when-downgrade"></iframe></p>
               </div>
               <div class="login-form">
                <form action="contact2.jsp">
                	
                  <input type="text" id="name" name="name" placeholder="Name" required>
                  <br><br>
                  
                    <input type="text" id="email" name="email" placeholder="Email" required>
                    <br><br>
                    
                    <input type="text" id="phone" name="phone" placeholder="Phone" required>
                    <br><br>
                  
                    <input type="text" id="message" name="message" placeholder="Message" required></input>
                    <br><br>
                    
                    
                    <input type="submit" name="send" value="Send">
                    
                    <br><br>
                  
                </form>
               </div>
            </div>
        </div>
    
    </section>  
	

<jsp:include page="footer.jsp"></jsp:include>

</body>
</html>