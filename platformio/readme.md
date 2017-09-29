# arduino-workshop
[![Build Status](https://travis-ci.org/universeworkshops/arduino-workshop.svg?branch=master)](https://travis-ci.org/universeworkshops/arduino-workshop)

> Arduino Due Sample CI/CD chain

## Usage

> :construction: Work in Progress

###### 1. `BOARD_ID`
Set your `BOARD_ID` (e.g. `due`) as variable in Travis CI environment variable via
```sh
$ travis env set PIO_BOARD <BOARD_ID> -r <GITHUB_USERNAME>/arduino-workshop
```

###### 2. `PIO_AGENT`
Set your `PIO_AGENT` as variable in Travis CI environment variable via
```sh
$ travis env set PIO_AGENT <PIO_AGENT> -r <GITHUB_USERNAME>/arduino-workshop
```

:information_source: http://docs.platformio.org/en/latest/userguide/remote/cmd_agent.html#platformio-remote-agent-start
:arrow_double_down: see also [6. Monitor (optional)](#6-monitor-optional)

###### 3. `PIO_USERNAME` and `PIO_PASSWORD`
To be able to use the [PIO Remote™ Agent](http://docs.platformio.org/en/latest/userguide/remote/cmd_agent.html) from [`script/cibuild`](./script/cibuild) and [`script/deploy`](./script/deploy), set your _PIO_USERNAME_ and _PIO_PASSWORD_ as variable in Travis CI environment variable via
```sh
$ travis env set PIO_USERNAME <PIO_USERNAME> -r <GITHUB_USERNAME>/arduino-workshop
$ travis env set PIO_PASSWORD <PIO_PASSWORD> -r <GITHUB_USERNAME>/arduino-workshop
```

:information_source: http://docs.platformio.org/en/latest/userguide/account/cmd_login.html

###### 4. `GITHUB_TOKEN`
[Create a GitHub token with `user` and `repo` scopes](https://github.com/settings/tokens/new?scopes=repo,user&description=platformio-deploy) to be used in [`script/deploy`](./script/deploy) and set it as variable in Travis CI via

```sh
travis env set GH_TOKEN <GITHUB_TOKEN> -r <GITHUB_USERNAME>/arduino-workshop
```

###### 5. Start the remote agent
Now to allow Travis CI to run tests and deployments on the locally connected (USB programming port) board, we have to start the agent locally to accept connections
```sh
$ platformio remote agent start --share <YOUT_PIO_LOGIN>
```

:information_source: http://docs.platformio.org/en/latest/userguide/remote/cmd_agent.html#platformio-remote-agent-start

If you don't have an account, you can create one with `platformio account register`.

###### 6. Monitor (optional)
We can run a serial port monitor locally, displaying information about what's going on.

`<PIO_AGENT>` has to be the same as in [2. `PIO_AGENT`](#2-pioagent) to work correctly in the here described scenario

```sh
$ platformio remote -a <PIO_AGENT> device monitor
```

:information_source: http://docs.platformio.org/en/latest/userguide/remote/cmd_device.html#platformio-remote-device-monitor

###### 7. Push code
Push code to your GitHub PR, and see CI and CD in effect.



## License [![license](https://img.shields.io/github/license/universeworkshops/arduino-workshop.svg)](https://github.com/universeworkshops/arduino-workshop/blob/master/license)
MIT © [Stefan Stölzle](https://github.com/stoe)
