pipeline{
  agent any      // Run on any available node
  stages{
    environment{
      IMAGE_NAME = 'AmitNachum/daily-temperatures' // Docker image repo name 
    }
    stage('Checkout'){
      
      steps{
        git branch 'main', url:'https://github.com/AmitNachum/daily-temperatures' // Clone repo
      }
    }

    stage('Build Docker'){
      steps{
        sh 'docker build -t %IMAGE_NAME%.lateset .' // Generate the image file 
      }

    stage('Push to Docker Hub'){
      steps{
        withCredentials([])
      }
    }  
    }


    
  }
}
