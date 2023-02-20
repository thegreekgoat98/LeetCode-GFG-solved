# Reverse alternate levels of a perfect binary tree
## Easy
<div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">Given a complete binary tree, reverse the nodes present at alternate levels.</span></p>

<p><strong><span style="font-size:18px">Example 1:</span></strong></p>

<pre><span style="font-size:18px"><strong>Input:</strong>
             1
          /   \
        3      2</span>

<strong><span style="font-size:18px">Output:</span></strong>

<span style="font-size:18px">             1
          /   \
        2      3</span>

<span style="font-size:18px"><strong>Explanation: </strong>Nodes at level 2 are reversed.</span></pre>

<p><strong><span style="font-size:18px">Example 2:</span></strong></p>

<pre><span style="font-size:18px"><strong>Input:</strong>
              1
          /      \
         2        3
       /  \      /  \
     42   51   63   72</span>

<span style="font-size:18px"><strong>Output:</strong>
             1
          /      \
         3        2
       /  \      /  \
     42   51   63   72</span>

<span style="font-size:18px"><strong>Explanation:</strong>
Nodes at level 2 are reversed.
Level 1 and 3 remain as it is.</span></pre>

<p><br>
<span style="font-size:18px"><strong>Your Task: &nbsp;</strong><br>
You dont need to read input or print anything. Complete the function <strong>reverseAlternate()</strong> which takes root node as input parameter and modifies the given tree in-place.</span></p>

<p><span style="font-size:18px"><strong>Note:</strong> If you click on Compile and Test the output will be the in-order traversal of the modified tree.</span></p>

<p><br>
<span style="font-size:18px"><strong>Expected Time Complexity:</strong> O(N)<br>
<strong>Expected Auxiliary Space:</strong> O(height of tree)</span><br>
&nbsp;</p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
1 ≤ N ≤ 10^4</span></p>
</div>