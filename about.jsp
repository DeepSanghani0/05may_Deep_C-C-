<%@ page language="java" contentType="text/html; charset=ISO-8859-1"
    pageEncoding="ISO-8859-1"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="ISO-8859-1">
<title>Insert title here</title>
<style>
    * {
      box-sizing: border-box;
      margin: 0;
      padding: 0;
    }

    .container {
      max-width: 1200px;
      margin: 0 auto;
    }
    .main {
      display: flex;
      flex-wrap: wrap;
      justify-content: space-between;
      padding: 40px;
    }

    .main .left {
      width: 60%;
    }

    .main .right {
      width: 35%;
      display: flex;
      justify-content: flex-end;
    }

    .main h2 {
      font-size: 24px;
      margin-bottom: 20px;
    }

    .main p {
      font-size: 18px;
      line-height: 1.5;
      margin-bottom: 20px;
    }

    .main a {
      display: inline-block;
      background-color: #333;
      color: white;
      padding: 10px 20px;
      text-decoration: none;
      border-radius: 5px;
    }

    .main a:hover {
      background-color: #555;
    }

    .main .product {
      margin-bottom: 20px;
    }

    .main .product .image {
      width: 100px;
      height: 100px;
      object-fit: cover;
    }

    .main .product .name {
      font-size: 18px;
      font-weight: bold;
      margin-top: 10px;
    }

    .main .product .price {
      font-size: 18px;
      color: green;
      margin-top: 5px;
    }
    @media (max-width: 768px) {
      .main .left, .main .right {
        width: 100%;
      }
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





	<div class="container" style="border: 2px ;border-style: solid; margin-top: 10px ;border-color: #032154; border-radius: 10px; margin-top: 70px"  >
    <div class="main" >
      <div class="left">
        <h2>Who We Are</h2>
        <p>We are a mobile shop that sells the latest and best smartphones at affordable prices. We have been in the business for over 10 years and have a loyal customer base. We offer a wide range of brands and models to suit your needs and preferences. Whether you are looking for a flagship phone, a budget phone, or a gaming phone, we have it all.</p>
        <p>A mobile phone (or cellphone[a]) is a portable telephone that can make and receive calls over a radio frequency link while the user is moving within a telephone service area, as opposed to a fixed-location phone (landline phone). The radio frequency link establishes a connection to the switching systems of a mobile phone operator, which provides access to the public switched telephone network (PSTN). Modern mobile telephone services use a cellular network architecture and therefore mobile telephones are called cellphones (or "cell phones") in North America. In addition to telephony, digital mobile phones support a variety of other services, such as text messaging, multimedia messaging, email, Internet access (via LTE, 5G NR or Wi-Fi), short-range wireless communications (infrared, Bluetooth), satellite access (navigation, messaging connectivity), business applications, video games and digital photography. Mobile phones offering only basic capabilities are known as feature phones; mobile phones which offer greatly advanced computing capabilities are referred to as smartphones.[1]</p>
        <a href="#">Read More</a>
      </div>
      <div class="right" >
      <div>
        <h2>Our Products</h2>
        <div class="product">
          <img src="data:image/jpeg;base64,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" alt="iPhone 13" class="image">
          <div class="name">iPhone 13</div>
          <div class="price">$999</div>
        </div>
        <div class="product">
          <img src="https://encrypted-tbn0.gstatic.com/images?q=tbn:ANd9GcRPXUqGQiGoWV-4ATTuwRuReQgrgHhnenIgxg&usqp=CAU" alt="Samsung Galaxy S21" class="image">
          <div class="name">Samsung Galaxy S21</div>
          <div class="price">$799</div>
        </div>
        <div class="product">
          <img src="https://encrypted-tbn0.gstatic.com/images?q=tbn:ANd9GcSNoYSu-4FV0aWIgiKqYpsdzDoz4U-y9VzAIQ&usqp=CAU" alt="OnePlus 9" class="image">
          <div class="name">OnePlus 9</div>
          <div class="price">$699</div>
        </div>
      </div>
      </div>
    </div>
  </div>
	
	
	
	
<jsp:include page="footer.jsp"></jsp:include>

</body>
</html>