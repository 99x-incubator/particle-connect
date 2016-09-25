# Particle-Connect

POST and GET requests through particle photon  without using Particle Cloud functions.

### Guide
- Connect Particle photon to the cloud.
- Open Particle [WebIDE](https://build.particle.io/)
- Paste the Particle-Connect code


```sh
    request.hostname = "yourhost.com";
    request.port = 80;
    request.path = "/yourc/path";
```

 - Replace hostname , port , path with yours server details.

```sh
     request.body = "json : sample" ;
```
 - Replace json:sample with  Variable values ,  that needed to be transmitted to the server.
 Eg :
```sh
     String str =  "temperature: " + temperatureReading ;
     request.body = str ;
```

### Libraries
 - HTTPClient for SparkCore.
