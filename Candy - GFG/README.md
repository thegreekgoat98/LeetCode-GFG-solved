# Candy
## Hard
<div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">There are <strong>N</strong> children standing in a line. Each child is assigned a rating value given in the integer array <strong>ratings</strong>.<br>
You are giving candies to these children subjected to the following requirements:</span></p>

<ul>
	<li><span style="font-size:18px">Each child must have atleast one candy.</span></li>
	<li><span style="font-size:18px">Children with a higher rating get more candies than neighbors.</span></li>
</ul>

<p><span style="font-size:18px">Return the <strong>minimum</strong> number of candies you need to have to distribute the candies to the children.</span></p>

<p>&nbsp;</p>

<p><strong>Example 1:</strong></p>

<div style="background: rgb(238, 238, 238); border: 1px solid rgb(204, 204, 204); padding: 5px 10px; --darkreader-inline-bgimage: initial; --darkreader-inline-bgcolor:#222426; --darkreader-inline-border-top:#3e4446; --darkreader-inline-border-right:#3e4446; --darkreader-inline-border-bottom:#3e4446; --darkreader-inline-border-left:#3e4446;"><span style="font-size:18px"><strong>Input:</strong><br>
N = 3<br>
ratings [ ] = {1, 0, 2}<br>
<strong>Output:&nbsp;</strong>5<br>
<strong>Explanation:</strong>&nbsp;<br>
You can allocate to the first, second and third child with 2, 1, 2 candies respectively.</span></div>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<div style="background: rgb(238, 238, 238); border: 1px solid rgb(204, 204, 204); padding: 5px 10px; --darkreader-inline-bgimage: initial; --darkreader-inline-bgcolor:#222426; --darkreader-inline-border-top:#3e4446; --darkreader-inline-border-right:#3e4446; --darkreader-inline-border-bottom:#3e4446; --darkreader-inline-border-left:#3e4446;"><span style="font-size:18px"><strong>Input:</strong><br>
N = 3<br>
ratings [ ] = {1, 2, 2}<br>
<strong>Output: </strong>4<br>
<strong>Explanation:</strong>&nbsp;<br>
You can allocate to the first, second and third child with 1, 2, 1&nbsp;candies respectively.<br>
The third child gets 1 candy because it statisfies the above two conditions.</span></div>

<p><span style="font-size:18px"><strong>Your Task:</strong><br>
You don't need to read input or print anything. Your task is to complete the function <strong>minCandy()</strong>&nbsp;which takes the interger <strong>N&nbsp;</strong>and&nbsp;integer array&nbsp;<strong>ratings[ ] </strong>as parameters and returns the <strong>minimum</strong> number of candies&nbsp;you need to have to distribute the candies to the children.</span></p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:</strong>&nbsp;O(N)<br>
<strong>Expected Auxiliary Space:</strong>&nbsp;O(N)</span></p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
1 ≤ N ≤&nbsp; 5*10<sup>4</sup><br>
0 ≤ ratings<sub>i</sub>&nbsp;≤ 10<sup>5</sup></span></p>
</div>