
Copyright (c) 2014-2015 Factor Core Developers


What is Factor?
----------------

Factor is an experimental new digital currency that enables anonymous, instant
payments to anyone, anywhere in the world. Factor uses peer-to-peer technology
to operate with no central authority: managing transactions and issuing money
are carried out collectively by the network. Factor Core is the name of open
source software which enables the use of this currency.

For more information, as well as an immediately useable, binary version of
the Factor Core software, see https://www.factor.org/downloads.


License
-------

Factor Core is released under the terms of the MIT license. See [COPYING](COPYING) for more
information or see http://opensource.org/licenses/MIT.

Development Process
-------------------

The `master` branch is meant to be stable. Development is normally done in separate branches.
[Tags](https://github.com/pmadi/factor/tags) are created to indicate new official,
stable release versions of Factor Core.

The contribution workflow is described in [CONTRIBUTING.md](https://github.com/pmadi/factor/blob/v0.12.1.x/CONTRIBUTING.md).


Testing
-------

Testing and code review is the bottleneck for development; we get more pull
requests than we can review and test on short notice. Please be patient and help out by testing
other people's pull requests, and remember this is a security-critical project where any mistake might cost people
lots of money.

### Automated Testing

Developers are strongly encouraged to write unit tests for new code, and to
submit new unit tests for old code. Unit tests can be compiled and run (assuming they weren't disabled in configure) with: `make check`

Every pull request is built for both Windows and Linux on a dedicated server,
and unit and sanity tests are automatically run. The binaries produced may be
used for manual QA testing — a link to them will appear in a comment on the
pull request posted by [FactorPullTester](https://github.com/pmadi/PullTester). See https://github.com/TheBlueMatt/test-scripts
for the build/test scripts. ***TODO***

### Manual Quality Assurance (QA) Testing

Large changes should have a test plan, and should be tested by somebody other
than the developer who wrote the code.
See https://github.com/pmadi/QA/ for how to create a test plan. ***TODO***

Translations
------------

Changes to translations as well as new translations can be submitted to
[Bitcoin Core's Transifex page](https://www.transifex.com/projects/p/factor/).

Translations are periodically pulled from Transifex and merged into the git repository. See the
[translation process](doc/translation_process.md) for details on how this works.

**Important**: We do not accept translation changes as GitHub pull requests because the next
pull from Transifex would automatically overwrite them again.

Translators should also subscribe to the [mailing list](https://groups.google.com/forum/#!forum/factor-translators). ***TODO***

Development tips and tricks
---------------------------

**compiling for debugging**

Run configure with the --enable-debug option, then make. Or run configure with
CXXFLAGS="-g -ggdb -O0" or whatever debug flags you need.

**debug.log**

If the code is behaving strangely, take a look in the debug.log file in the data directory;
error and debugging messages are written there.

The -debug=... command-line option controls debugging; running with just -debug will turn
on all categories (and give you a very large debug.log file).

The Qt code routes qDebug() output to debug.log under category "qt": run with -debug=qt
to see it.

**testnet and regtest modes**

Run with the -testnet option to run with "play factor" on the test network, if you
are testing multi-machine code that needs to operate across the internet.

If you are testing something that can run on one machine, run with the -regtest option.
In regression test mode, blocks can be created on-demand; see qa/rpc-tests/ for tests
that run in -regtest mode.

**DEBUG_LOCKORDER**

Factor Core is a multithreaded application, and deadlocks or other multithreading bugs
can be very difficult to track down. Compiling with -DDEBUG_LOCKORDER (configure
CXXFLAGS="-DDEBUG_LOCKORDER -g") inserts run-time checks to keep track of which locks
are held, and adds warnings to the debug.log file if inconsistencies are detected.


### Coin Specs
<table>
<tr><td>Algo</td><td>Quark</td></tr>
<tr><td>Block Time</td><td>60 Seconds</td></tr>
<tr><td>Difficulty Retargeting</td><td>Every Block</td></tr>
<tr><td>Max Coin Supply (PoW Phase)</td><td>43,199,500 FTC</td></tr>
<tr><td>Max Coin Supply (PoS Phase)</td><td>Infinite</td></tr>
<tr><td>Premine</td><td>60,000 FTC*</td></tr>
</table>

*60,000 FTC Premine was burned in

### Reward Distribution

<table>
<th colspan=4>Genesis Block</th>
<tr><th>Block Height</th><th>Reward Amount</th><th>Notes</th></tr>
<tr><td>1</td><td>60,000 FTC</td><td>Initial Pre-mine, burnt in block <a href="http://www.presstab.pw/phpexplorer/PIVX/block.php?blockhash=206d9cfe859798a0b0898ab00d7300be94de0f5469bb446cecb41c3e173a57e0">279917</a></td></tr>
</table>

### PoW Rewards Breakdown

<table>
<th>Block Height</th><th>Masternodes</th><th>Miner</th><th>Budget</th>
<tr><td>2-43200</td><td>20% (50 FTC)</td><td>80% (200 FTC)</td><td>N/A</td></tr>
<tr><td>43201-151200</td><td>20% (50 FTC)</td><td>70% (200 FTC)</td><td>10% (25 FTC)</td></tr>
<tr><td>151201-259200</td><td>45% (22.5 FTC)</td><td>45% (22.5 FTC)</td><td>10% (5 FTC)</td></tr>
</table>

### PoS Rewards Breakdown

<table>
<th>Phase</th><th>Block Height</th><th>Reward</th><th>Masternodes & Stakers</th><th>Budget</th>
<tr><td>Phase 0</td><td>259201-302399</td><td>50 FTC</td><td>90% (45 FTC)</td><td>10% (5 FTC)</td></tr>
<tr><td>Phase 1</td><td>302400-345599</td><td>45 FTC</td><td>90% (40.5 FTC)</td><td>10% (4.5 FTC)</td></tr>
<tr><td>Phase 2</td><td>345600-388799</td><td>40 FTC</td><td>90% (36 FTC)</td><td>10% (4 FTC)</td></tr>
<tr><td>Phase 3</td><td>388800-431999</td><td>35 FTC</td><td>90% (31.5 FTC)</td><td>10% (3.5 FTC)</td></tr>
<tr><td>Phase 4</td><td>432000-475199</td><td>30 FTC</td><td>90% (27 FTC)</td><td>10% (3 FTC)</td></tr>
<tr><td>Phase 5</td><td>475200-518399</td><td>25 FTC</td><td>90% (22.5 FTC)</td><td>10% (2.5 FTC)</td></tr>
<tr><td>Phase 6</td><td>518400-561599</td><td>20 FTC</td><td>90% (18 FTC)</td><td>10% (2 FTC)</td></tr>
<tr><td>Phase 7</td><td>561600-604799</td><td>15 FTC</td><td>90% (13.5 FTC)</td><td>10% (1.5 FTC)</td></tr>
<tr><td>Phase 8</td><td>604800-647999</td><td>10 FTC</td><td>90% (9 FTC)</td><td>10% (1 FTC)</td></tr>
<tr><td>Phase 9</td><td>648000-1154203</td><td>5 FTC</td><td>90% (4.5 FTC)</td><td>10% (0.5 FTC)</td></tr>
<tr><td>Phase X</td><td>1154203-∞</td><td>6 FTC</td><td>84% (5 PIV/FTC)</td><td>16% (1 FTC)</td></tr>
</table>

