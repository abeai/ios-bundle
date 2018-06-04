# Change Log
All notable changes to this project will be documented in this file.

The format is based on [Keep a Changelog](http://keepachangelog.com/en/1.0.0/)
and `SalemoveSDK` adheres to [Semantic Versioning](http://semver.org/).

## [Unreleased]

## [0.7.7] - 2018-05-01

### Changed

- Support Swift 4.1 and 3.3 compatability mode for some dependencies

### Removed

- Moya-ObjectMapper dependency

### Added

- ObjectMapper dependency

## [0.7.6] - 2018-03-21

### Added

- Crashlytics integration to the demo app

### Changed

- Internals to support better client library distribution

### Removed

- Sensitive information removed from the project

## [0.7.5] - 2018-03-02

### Added

- One way video support to the client library
- onMediaStreamAdded handling requirement for the Interactable

## [0.7.4] - 2018-02-23

### Changed

- SiteID configuration now does not rely on hardcoded values

### Removed

- Configuration file from the client library

## [0.7.3] - 2018-02-21

### Added

- Two way audio support to the client library

### Changed

- Mediable protocol so the method now is called `requestMediaUpgrade` for requesting a communication

## [0.7.2] - 2018-02-07

### Added

- Ability to accept one way audio request from the Operator

## [0.7.1] - 2018-01-16

### Changed

- API now throws an error when providing incorrect configuration

### Fixed

- Fix messaging and queue selection for different site ID

## [0.7.0] - 2018-01-16

### Added

- Additional callback for push handling
- Ability to list all queues for configured site

## [0.6.0] - 2018-01-11

### Added

- Correct way of canceling and Engagement request
- Swift 4 support
- Sending Chat Message without an active Engagement

## [0.5.0] - 2018-01-4

### Changed

- Wrap chat message into Message object with ID and sender information

### Fixed

- Fix typos in documentation

## [0.4.0] - 2018-01-3

### Added

- Queueing for an Engagement
- SalemoveError for better understanding of the errors
- Scoping of the API, clearer objects
- Ability to configure the app token

## [0.3.0] - 2017-12-18

### Added
- Websockets for keeping the incoming callbacks and messaging more stable
- applicationDidBecomeActive manageable by SDK
- Additional server selection

## [0.2.1] - 2017-11-28

### Changed
- Rename in the SDK the way to queue for an engagement

### Removed
- Ability to specify the interactor directly in the SDK, now using a configurable protocol

## [0.2.0] - 2017-11-23

### Added
- Ability to configure the SDK from the API
- SDK to accept the Interactable object as part of the engagement handling
- Ability to generate the documentation using jazzy

### Changed
- SDK now is compiled as a library, so the source code is closed

### Removed
- echo example query for the push notifications
- UI code for the SDK

## [0.1.0] - 2017-11-16

### Added
- Initial version of the SDK