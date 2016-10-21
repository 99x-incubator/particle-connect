# Particle-Connect

[![Join the chat at https://gitter.im//particle-connect/Lobby](https://badges.gitter.im/particle-connect/Lobby.svg)](https://gitter.im/particle-connect/Lobby?utm_source=badge&utm_medium=badge&utm_campaign=pr-badge&utm_content=badge)


POST and GET requests through particle photon  without using Particle Cloud functions.Test

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

## Contributing

We love our contributors! If you'd like to contribute to the project, feel free to submit a PR. But please keep in mind the following guidelines:

Propose your changes before you start working on a PR. You can reach us by submitting a Github issue. This is just to make sure that no one else is working on the same change, and to figure out the best way to solve the issue.
If you're out of ideas, but still want to contribute, help us in solving Github issues already verified.
Contributions are not just PRs! We'd be grateful for having you, and if you could provide some support for new comers, that be great! You can also do that by answering this plugin related questions on Stackoverflow. You can also contribute by writing. Feel free to let us know if you want to publish a useful guides, improve the documentation (attributed to you, thank you!) that you feel will help the community.

## License

MIT
